// sub_080F7798 at 0x080F7798 (thumb)

undefined4 sub_080F7798(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 in_lr;
  char acStack_1c [4];
  char acStack_18 [4];
  
  sub_08128B5C(acStack_1c,&DAT_08129d64,4);
  sub_08128B5C(acStack_18,&DAT_08129d68,4);
  sub_0801CC9C(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CF00(param_1,0x7000);
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
  *(undefined **)(param_1 + 0x30) = &DAT_08866dd4;
  *(undefined2 *)(param_1 + 0x26) = 1;
  *(int *)(param_1 + 100) = *(int *)(param_1 + 0x58) + acStack_1c[*(byte *)(param_1 + 0x10)] * 0x100
  ;
  *(int *)(param_1 + 0x68) =
       *(int *)(param_1 + 0x58) + acStack_18[*(byte *)(param_1 + 0x10)] * 0x100;
  uVar1 = sub_08128A9C(DAT_0202dae0,0x8e);
  *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0x10) >> 1 ^ 1;
  uVar2 = 0;
  if (uVar1 != 0) {
    do {
      sub_080F7870(param_1);
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  *(undefined *)(param_1 + 0x10) = *(undefined *)(param_1 + 0xd);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = *(undefined *)(param_1 + 0xd);
  sub_080F7870(param_1);
  return in_lr;
}

