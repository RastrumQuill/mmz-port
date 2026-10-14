// sub_080C6DD8 at 0x080C6DD8 (thumb)

void sub_080C6DD8(undefined4 param_1,int param_2)

{
  undefined *puVar1;
  uint uVar2;
  
  uVar2 = (uint)**(byte **)(param_2 + 0x40);
  puVar1 = (undefined *)sub_080C6C62(&DAT_04000060 + uVar2,param_2,*(byte **)(param_2 + 0x40) + 1);
  *puVar1 = (char)uVar2;
  return;
}

