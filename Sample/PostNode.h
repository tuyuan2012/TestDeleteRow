/* This file provided by Facebook is for non-commercial testing and evaluation
 * purposes only.  Facebook reserves all rights not expressly granted.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * FACEBOOK BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
 * ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

#import <AsyncDisplayKit/AsyncDisplayKit.h>
#import "Post.h"

@class LikesNode;
@class CommentsNode;

@interface PostNode : ASCellNode <ASTextNodeDelegate> {
    
    Post *_post;
    
    ASDisplayNode *_divider;//分割线
    ASTextNode *_nameNode;
    ASTextNode *_usernameNode;
    ASTextNode *_timeNode;
    ASTextNode *_postNode;
    ASImageNode *_viaNode;
    ASNetworkImageNode *_avatarNode;
    ASNetworkImageNode *_mediaNode;
    LikesNode *_likesNode;
    CommentsNode *_commentsNode;
    ASImageNode *_optionsNode;
}

- (instancetype)initWithPost:(Post *)post;

@end
