import './Style.css';
import Header from './header';
import Slider from './slider';  
import Services from './services';
import GreenCard from './green_card';
import PlantMake from './plant_make';
import ServicesSlider from './services_slider';
import Testimonials from './TESTIMONIALS';
import RecentPost from './recent_post';
import Subscribe from './Subscribe';
import Footer1 from './footer1';
import Footer2 from './footer2';
import Topmove from './topmove';
export default function Main(){
    return (<div>
        

       <Header></Header>
       <Slider></Slider>
       <Services></Services>
       <GreenCard></GreenCard>
       <PlantMake></PlantMake>
       <ServicesSlider></ServicesSlider>
       <Testimonials></Testimonials>
       <RecentPost></RecentPost>
       <Subscribe></Subscribe>
       <Footer1></Footer1>
       <Footer2></Footer2>
        <Topmove/>
       
        </div>)
    
}