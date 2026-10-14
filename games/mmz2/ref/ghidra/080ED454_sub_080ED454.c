// sub_080ED454 at 0x080ED454 (thumb)

void sub_080ED454(undefined4 param_1,int param_2)

{
  undefined *puVar1;
  uint uVar2;
  
  uVar2 = (uint)**(byte **)(param_2 + 0x40);
  puVar1 = (undefined *)sub_080ED2DE(&DAT_04000060 + uVar2,param_2,*(byte **)(param_2 + 0x40) + 1);
  *puVar1 = (char)uVar2;
  return;
}

