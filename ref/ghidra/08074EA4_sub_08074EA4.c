// sub_08074EA4 at 0x08074EA4 (thumb)

undefined4 sub_08074EA4(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  sub_080489E4();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_080033F0(param_1 + 0x6c,6);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  *(undefined *)(param_1 + 0x44) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef | 4;
  sub_080055FC(param_1 + 0x74,&DAT_082b16c0,param_1 + 0x4c,4);
  *(int *)(param_1 + 0xb4) = param_1;
  *(undefined4 *)(param_1 + 0xb0) = 0x8075229;
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0xfffffd80;
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0xc0) = DAT_0202164c;
  iVar1 = sub_08013D9C(&DAT_02022c44,param_1 + 0x4c);
  if (iVar1 == 0) {
    sub_08001EAC(0xeb);
    sub_0809B340(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50),6,0);
  }
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_08074AA4(param_1);
  return in_lr;
}

