// sub_08104B0C at 0x08104B0C (thumb)

undefined4 sub_08104B0C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  sub_0801CC9C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef | 3;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  if (*(char *)(param_1 + 0x11) == '\x04') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08005760(param_1 + 0x74,&DAT_08868c7c,param_1 + 0x54,1);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08005760(param_1 + 0x74,&DAT_08868c64,param_1 + 0x54,0x80);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  *(undefined4 *)(param_1 + 0x98) = 0x8104d89;
  *(undefined *)(param_1 + 0xb4) = 0;
  *(undefined *)(param_1 + 0xb5) = 0;
  *(undefined *)(param_1 + 0xb6) = 0;
  iVar1 = *(int *)(param_1 + 0x54) +
          *(int *)(&DAT_08868cac + (uint)*(byte *)(param_1 + 0x10) * 4) * 0x100;
  *(int *)(param_1 + 0x54) = iVar1;
  iVar1 = sub_08008534(iVar1,*(undefined4 *)(param_1 + 0x58));
  *(int *)(param_1 + 0x58) = iVar1 + -0x7800;
  *(undefined4 *)(param_1 + 0x60) = 0;
  sub_0801CF00(param_1,*(undefined2 *)(&DAT_08868cc0 + (uint)*(byte *)(param_1 + 0x11) * 2));
  sub_08104C00(param_1);
  return in_lr;
}

