// sub_08026DC0 at 0x08026DC0 (thumb)

undefined4 sub_08026DC0(int param_1)

{
  undefined uVar1;
  int iVar2;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  uVar1 = sub_08036A70(param_1,&DAT_08335d18);
  *(undefined *)(param_1 + 0x2c1) = uVar1;
  iVar2 = sub_08032F24();
  if (iVar2 == 0) {
    *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
    *(undefined2 *)(param_1 + 0xe) = 1;
    sub_08026E20(param_1);
  }
  else {
    *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
    *(undefined2 *)(param_1 + 0xe) = 2;
    sub_080271B4(param_1);
  }
  return in_lr;
}

