// sub_0807AF2C at 0x0807AF2C (thumb)

undefined4 sub_0807AF2C(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  sub_08012580();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080127E4(param_1,0x4a02);
  sub_080128D4(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08006DE4(param_1 + 0x74,&DAT_08340134,param_1 + 0x54,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  if ((*(byte *)(iVar2 + 10) & 0x10) == 0) {
    *(int *)(param_1 + 0x54) = *(int *)(iVar2 + 0x54) + -0x1500;
    uVar1 = 0xffffff00;
  }
  else {
    *(int *)(param_1 + 0x54) = *(int *)(iVar2 + 0x54) + 0x1500;
    uVar1 = 0x100;
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar1;
  *(int *)(param_1 + 0x58) = *(int *)(iVar2 + 0x58) + -0x2e00;
  *(undefined4 *)(param_1 + 0x60) = 0xfffffa80;
  *(undefined *)(param_1 + 0x12) = 0x1e;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_0807AEF4(param_1);
  return in_lr;
}

