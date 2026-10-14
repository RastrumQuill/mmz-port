// sub_08057B20 at 0x08057B20 (thumb)

undefined4 sub_08057B20(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0835e0e8 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = (&DAT_08361274)[*(byte *)(param_1 + 0x10)];
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801749C(param_1);
  sub_080176EC(param_1);
  sub_0803D3D4(param_1,&DAT_08360594,0x40);
  *(undefined4 *)(param_1 + 0x98) = 0x8057a75;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  if (*(char *)(param_1 + 0x10) == '\0') {
    uVar1 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar1;
    uVar1 = sub_0800A2CC(*(undefined4 *)(param_1 + 0x54));
    iVar2 = sub_0800A4B4(*(undefined4 *)(param_1 + 0x54),uVar1);
    iVar3 = sub_0800A3C4(*(undefined4 *)(param_1 + 0x54),uVar1);
    piVar4 = (int *)(param_1 + 0xbc);
    iVar2 = (iVar2 + iVar3) / 2;
    *piVar4 = iVar2;
    sub_080CE320(param_1,iVar2 + -0x6000,*(undefined4 *)(param_1 + 0x58));
    sub_080CE320(param_1,*piVar4 + -0x2000,*(undefined4 *)(param_1 + 0x58));
    sub_080CE320(param_1,*piVar4 + 0x2000,*(undefined4 *)(param_1 + 0x58));
    sub_080CE320(param_1,*piVar4 + 0x6000,*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0xb4) = 1;
    *(undefined *)(param_1 + 0xc0) = 0xff;
    *(undefined *)(param_1 + 0xc1) = 0;
    sub_0800393C(&DAT_085d7fec,(DAT_0202fac2 - 0x300) * 0x20 + 0x10000);
    sub_08003E14(&DAT_085d7ff8,(DAT_0202f8c2 - 4) * 0x20 + 0x200);
    sub_0800393C(&DAT_085d8000,(DAT_0202fac4 - 0x380) * 0x20 + 0x10000);
    sub_08003E14(&DAT_085d800c,(DAT_0202f8c4 - 5) * 0x20 + 0x200);
  }
  sub_08057CCC(param_1);
  return in_lr;
}

