// import logo from './logo.svg';
// import './App.css';
import Q1 from './q1';
import Q2 from './q2';
import Q3 from './q3';
import Q4 from './q4';
import Q5 from './q5';
import Q6 from './q6';
import Q7 from './q7';
import Q8 from './q8';
import Q9 from './q9';


function App() {
  return (
    <div >
      <Q1/>
      <hr/>
      <Q2/>
      <hr/>
      <Q3/>
      <hr/>
      <Q4 name={"Harmit"}/>
      <hr/>
      <Q5/>
      <hr/>
      <Q6 data={[{name:"harmit",age:"20",location:"palitana"},
                  {name:"harmit1",age:"21",location:"palitana1"},
                  {name:"harmit2",age:"22",location:"palitana2"},
                  {name:"harmit3",age:"23",location:"palitana3"},
                  {name:"harmit4",age:"24",location:"palitana4"},
                  {name:"harmit5",age:"25",location:"palitana5"},
                  {name:"harmit6",age:"26",location:"palitana6"},
                  {name:"harmit7",age:"27",location:"palitana7"},
                  {name:"harmit8",age:"28",location:"palitana8"},
                  {name:"harmit9",age:"29",location:"palitana9"}

      ]}/>
      <hr/>
      <Q7/>
      <hr/>
      <Q8/>
      <hr/>
      <Q9/>
    </div>
  );
}

export default App;
