import './App.css';
import { useState } from 'react'
import Header from './Components/Header/Header'
// Todolista z możliwaściami:
// - dodawania zadania do zrobienia
// - usuwania zadania do zrobienia
// - wyszukiwania zadań

function App() {
  const initialList = [
    "Wynieść śmieci" ,
    "Zrobić projekt",
    "Nauczyć się programowania dynamicznego"
  ]
  const [todo, setTodo] = useState(initialList);
  const [search, setSearch] = useState("");
  let r = "";
  let del = ""
  return (
    <>
    <Header>bababab</Header>
      <input
        onChange={(event) => {
            const value = event.target.value;
            setSearch(value);
          }
        }
      />
      <ul>
      { todo
      .filter((element) => element.toLowerCase().includes(search.toLowerCase()))
      .map((element ,index) => (
        <li>{element} ({index})</li>
      ))
      }
      </ul>
      <form>
        
        <input onChange={(event) => {
            r = event.target.value;
            
        }}/>
        <button 
          type="submit"
          onClick={e => {
            e.preventDefault();
           
            setTodo([...todo, r]);
            console.log(e.target.previousElementSibling.value);
          }}
        >
        dodaj todo
        </button>
        <button 
          type="submit"
          onClick={e => {
            e.preventDefault();
            if( todo.includes(r)){
              todo.delete(r);
              console.log("bbb");
            }
          }}
        >
        usun todo
        </button>
        
      </form>
    </>
  );
}

export default App;
