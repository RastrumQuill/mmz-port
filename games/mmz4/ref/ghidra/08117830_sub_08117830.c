// sub_08117830 at 0x08117830 (thumb)

undefined4 sub_08117830(int param_1)

{
  undefined uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x63a8);
  sub_08002624(0x12);
  *(undefined *)(*(int *)(param_1 + 0xdec) + 0x7c) = 1;
  uVar3 = *(ushort *)(iVar5 + 0xa4);
  uVar2 = sub_0802B604(iVar5);
  if ((short)(uVar2 & 0xff) < (short)uVar3) {
    uVar3 = sub_0802B604(iVar5);
    *(ushort *)(iVar5 + 0xa4) = uVar3 & 0xff;
  }
  sub_08117A68(param_1);
  if (2 < *(byte *)(iVar5 + 0xf8)) {
    *(byte *)(iVar5 + 0xf8) = 2;
  }
  if (2 < *(byte *)(iVar5 + 0xf9)) {
    *(byte *)(iVar5 + 0xf9) = 2;
  }
  sub_08117B18(param_1);
  if (*(char *)(param_1 + 0xdf4) != *(char *)(iVar5 + 0xc2)) {
    sub_0802AD84(*(undefined *)(iVar5 + 0xc2));
  }
  sub_08128884(param_1,*(undefined4 *)(&DAT_08885dac + (uint)*(byte *)(param_1 + 0xdf8) * 4));
  uVar4 = (uint)*(byte *)(iVar5 + 0xf1) + (uint)*(byte *)(iVar5 + 0xf2) +
          (uint)*(byte *)(iVar5 + 0xf3);
  if (*(byte *)(param_1 + 0xe06) < uVar4) {
    DAT_0202e8f0 = (undefined)uVar4;
  }
  uVar4 = (uint)*(byte *)(iVar5 + 0xf4);
  if (*(char *)(iVar5 + 0xc5) == '\x12') {
    uVar4 = uVar4 + 1;
  }
  if ((uVar4 < *(byte *)(param_1 + 0xe07)) &&
     (DAT_0202e8f1 = *(byte *)(iVar5 + 0xf4), *(char *)(iVar5 + 0xc5) == '\x12')) {
    DAT_0202e8f1 = DAT_0202e8f1 + 1;
  }
  sub_0803A970(0x8117dcd);
  if ((uint)*(byte *)(iVar5 + 0xf1) + (uint)*(byte *)(iVar5 + 0xf2) + (uint)*(byte *)(iVar5 + 0xf3)
      == 0) {
    sub_08108B80(0x8117ded);
  }
  else if (*(char *)(param_1 + 0xdf6) == '\0') {
    sub_08108CD8(iVar5);
  }
  uVar1 = sub_08038928(iVar5);
  sub_0802B524(iVar5,uVar1);
  sub_08112080(param_1,0x600);
  return in_lr;
}

