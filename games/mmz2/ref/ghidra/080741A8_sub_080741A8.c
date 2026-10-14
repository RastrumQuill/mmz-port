// sub_080741A8 at 0x080741A8 (thumb)

undefined4 sub_080741A8(int param_1)

{
  byte bVar1;
  undefined uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  sub_08012580();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080127D0(param_1);
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_080127E4(param_1,0xa20c);
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 4;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    *(undefined *)(param_1 + 0x12) = 0;
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 0x10;
  }
  else {
    if (*(char *)(param_1 + 0x10) == '\x01') {
      sub_080127E4(param_1,0xa20f);
      *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) | 0xc;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      *(undefined *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      *(undefined *)(param_1 + 0x12) = 0;
      *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 0x10;
      uVar2 = *(undefined *)(*(int *)(*(int *)(param_1 + 0x28) + 0x28) + 0x1c);
      goto LAB_080742cc;
    }
    sub_080127E4(param_1,0xa214);
    bVar1 = *(byte *)(iVar5 + 10) >> 4;
    uVar4 = bVar1 & 1;
    if ((bVar1 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(char *)(param_1 + 0x4c) = (char)uVar4;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
    uVar3 = *(undefined4 *)(iVar5 + 0x58);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar5 + 0x54);
    *(undefined4 *)(param_1 + 0x58) = uVar3;
    if ((*(byte *)(iVar5 + 10) & 0x10) == 0) {
      *(undefined4 *)(param_1 + 0x5c) = 0x40;
      *(undefined4 *)(param_1 + 100) = 0xffffffff;
    }
    else {
      *(undefined4 *)(param_1 + 0x5c) = 0xffffffc0;
      *(undefined4 *)(param_1 + 100) = 1;
    }
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 0x10;
  }
  uVar2 = *(undefined *)(iVar5 + 0x1c);
LAB_080742cc:
  *(undefined *)(param_1 + 0x1d) = uVar2;
  sub_080128D4(param_1);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_080742F8(param_1);
  return in_lr;
}

