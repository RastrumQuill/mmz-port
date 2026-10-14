// sub_0807721C at 0x0807721C (thumb)

undefined4 sub_0807721C(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x10) == '\x01') {
    uVar1 = sub_080093C4(param_2,param_3);
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x68);
  }
  return uVar1;
}

