<?php // COLOR SCHEME TEST "molokai/molokai.tmTheme" "PHP"

      //
// ^ fg=#f8f8f2 bg=#1b1d1e fs=

namespace AppBundle\Controller;
// ^ fg=#a6e22e
//          ^ fg=#f8f8f2

use Symfony\Bundle\FrameworkBundle\Controller\Controller;
//^ fg=#a6e22e
//  ^ fg=#f8f8f2
//              ^ fg=#f8f8f2
use Sensio\Bundle\FrameworkExtraBundle\Configuration\Route;

class DefaultController extends Controller
// ^ fg=#f92672
//                          ^ fg=#f92672
{
    /**
     * @Route("/", name="homepage")
     */
    public function indexAction()
//  ^ fg=#f92672
//          ^ fg=#66d9ef
//                             ^^ fg=#66d9ef
    {
//  ^ fg=#66d9ef
        $posts = $this->getDoctrine()
//      ^ fg=#f92672
//       ^ fg=#fd971f
//             ^ fg=#f92672
//               ^ fg=#f92672
//                ^ fg=#fd971f
//                    ^^ fg=#f92672
//                      ^ fg=#fd971f
            ->getRepository('AppBundle:Post')
//          ^^ fg=#f92672
//              ^ fg=#fd971f
//                         ^ fg=#66d9ef
//                          ^^^^^^^^^^^^^^^^ fg=#e6db74
//                                          ^ fg=#66d9ef
            ->findLatest();
//          ^^ fg=#f92672
//              ^ fg=#fd971f

        return $this->render('default/index.html.twig', array(
//      ^ fg=#f92672
//                           ^^^^^^^^^^^^^^^^^^^^^^^^^ fg=#e6db74
//                                                      ^^^^^^ fg=#66d9ef
            'posts' => $posts
        ));
//      ^^ fg=#66d9ef
    }
//  ^ fg=#66d9ef
}
