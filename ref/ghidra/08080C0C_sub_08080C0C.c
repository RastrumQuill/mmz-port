// sub_08080C0C at 0x08080C0C (thumb)

undefined4 sub_08080C0C(int param_1)

{
  undefined uVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  undefined auStack_24 [8];
  
  sub_080C8D70(auStack_24,&DAT_080c93c8,6);
  iVar2 = *(int *)(param_1 + 0x20);
  sub_08076600(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_080033F0(param_1 + 0x6c,2);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  *(undefined *)(param_1 + 0x44) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef | 4;
  sub_080055FC(param_1 + 0x74,&DAT_082b2830,param_1 + 0x4c,0x40);
  *(int *)(param_1 + 0xb4) = param_1;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  uVar3 = (uint)*(byte *)(param_1 + 0x11);
  if ((*(byte *)(iVar2 + 10) & 0x10) != 0) {
    uVar3 = uVar3 + 3;
  }
  uVar1 = auStack_24[uVar3];
  *(undefined *)(param_1 + 0x13) = uVar1;
  *(undefined *)(param_1 + 0x1f) = uVar1;
  *(undefined2 *)(param_1 + 0xc0) = 0x100;
  *(undefined2 *)(param_1 + 0xc2) = 0;
  *(int *)(param_1 + 0x54) =
       (int)(short)(&DAT_080c8e24)[(*(byte *)(param_1 + 0x13) + 0x80 & 0xff) + 0x40];
  *(int *)(param_1 + 0x58) = (int)(short)(&DAT_080c8e24)[*(byte *)(param_1 + 0x13) + 0x80 & 0xff];
  *(undefined *)(param_1 + 0x12) = 8;
  sub_08080994(param_1,2,0);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xf) = 1;
  sub_08080A04(param_1);
  return in_lr;
}

