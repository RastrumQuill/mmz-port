// sub_080A50DC at 0x080A50DC (thumb)

undefined4 sub_080A50DC(int param_1)

{
  undefined uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  sub_0801260C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080127E4(param_1,0x5502);
  sub_080128D4(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08006DE4(param_1 + 0x74,&DAT_08344e48,param_1 + 0x54,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  uVar3 = (uint)*(byte *)(param_1 + 0x11);
  if ((*(byte *)(iVar4 + 10) & 0x10) != 0) {
    uVar3 = uVar3 + 3;
  }
  uVar1 = (&DAT_08344e78)[uVar3];
  *(undefined *)(param_1 + 0x13) = uVar1;
  *(undefined *)(param_1 + 0x24) = uVar1;
  *(undefined2 *)(param_1 + 0xc0) = 0x100;
  *(undefined2 *)(param_1 + 0xc2) = 0;
  uVar2 = *(undefined4 *)(iVar4 + 0x58);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar4 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  *(int *)(param_1 + 0x5c) =
       (int)(short)(&DAT_080ef450)[(*(byte *)(param_1 + 0x13) + 0x80 & 0xff) + 0x40 & 0xff];
  *(int *)(param_1 + 0x60) = (int)(short)(&DAT_080ef450)[*(byte *)(param_1 + 0x13) + 0x80 & 0xff];
  *(undefined *)(param_1 + 0x12) = 8;
  sub_080A4E3C(param_1,2,0);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xf) = 1;
  sub_080A4EA4(param_1);
  return in_lr;
}

