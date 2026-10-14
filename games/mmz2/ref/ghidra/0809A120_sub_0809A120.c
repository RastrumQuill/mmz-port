// sub_0809A120 at 0x0809A120 (thumb)

undefined4 sub_0809A120(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  sub_08012580();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080127E4(param_1,0x1000);
  sub_080128D4(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08006DE4(param_1 + 0x74,&DAT_0834346c,param_1 + 0x54,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) | 0xc;
  if ((*(byte *)(iVar2 + 10) & 0x10) == 0) {
    *(int *)(param_1 + 0x54) = *(int *)(iVar2 + 0x54) + -0x4300;
    *(undefined4 *)(param_1 + 0x5c) = 0xffffff00;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    *(undefined *)(param_1 + 0x4c) = 1;
    bVar1 = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
  }
  else {
    *(int *)(param_1 + 0x54) = *(int *)(iVar2 + 0x54) + 0x4200;
    *(undefined4 *)(param_1 + 0x5c) = 0x100;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined *)(param_1 + 0x4c) = 0;
    bVar1 = *(byte *)(param_1 + 0x4a) & 0xef;
  }
  *(byte *)(param_1 + 0x4a) = bVar1;
  *(int *)(param_1 + 0x58) = *(int *)(iVar2 + 0x58) + 0x1b00;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 4);
  sub_0809A0C0(param_1);
  return in_lr;
}

