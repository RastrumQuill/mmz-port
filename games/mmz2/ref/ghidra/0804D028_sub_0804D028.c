// sub_0804D028 at 0x0804D028 (thumb)

undefined4 sub_0804D028(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  sub_08012580();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080127E4(param_1,0x1e01);
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0x11) == '\0') {
    sub_0803F9E4(param_1,&DAT_0833b668,0x10);
  }
  else {
    sub_0803F9E4(param_1,&DAT_0833b638,0x20);
  }
  uVar1 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
  *(undefined *)(param_1 + 0xbd) = 0;
  *(undefined *)(param_1 + 0xbe) = 0;
  *(undefined *)(param_1 + 0xbf) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if (*(char *)(param_1 + 0x10) == '\0') {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      *(uint *)(param_1 + 0x5c) = *(byte *)(param_1 + 10) & 0x10;
      uVar1 = 8;
    }
    else {
      *(undefined4 *)(param_1 + 0x5c) = 0;
      uVar1 = 0xfffffff8;
    }
    *(undefined4 *)(param_1 + 100) = uVar1;
    uVar4 = 0;
    iVar2 = *(int *)(param_1 + 0x5c);
    iVar3 = *(int *)(param_1 + 0x54);
    do {
      iVar2 = iVar2 + *(int *)(param_1 + 100);
      iVar3 = iVar3 + iVar2;
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x40);
    *(int *)(param_1 + 0x54) = iVar3;
    *(int *)(param_1 + 0x5c) = iVar2;
  }
  sub_08073A0C(param_1,0,0);
  sub_08073A0C(param_1,0,1);
  sub_080B48C8(param_1,0);
  sub_08002638(&DAT_08432f58,(DAT_0202e5cc - 0x200) * 0x20 + 0x10000);
  sub_08002AEC(&DAT_08432f64,(DAT_0202e3cc - 4) * 0x20 + 0x200);
  sub_08002638(&DAT_08432f6c,(DAT_0202e5ce - 0x230) * 0x20 + 0x10000);
  sub_08002AEC(&DAT_08432f78,(DAT_0202e3ce - 4) * 0x20 + 0x200);
  sub_08002638(&DAT_08432f80,(DAT_0202e5d0 - 0x380) * 0x20 + 0x10000);
  sub_08002AEC(&DAT_08432f8c,(DAT_0202e3d0 - 5) * 0x20 + 0x200);
  sub_08002638(&DAT_08432f94,(DAT_0202e5d2 - 0x210) * 0x20 + 0x10000);
  sub_08002AEC(&DAT_08432fa0,(DAT_0202e3d2 - 7) * 0x20 + 0x200);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833a138 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_0804D208(param_1);
  return in_lr;
}

