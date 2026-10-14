// sub_080691B8 at 0x080691B8 (thumb)

undefined4 sub_080691B8(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x20);
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0800561C(param_1 + 0x74,&DAT_082b0cb0);
    sub_080020A4(param_1 + 0x2c,*(undefined4 *)(iVar3 + 0x34),param_1 + 0x4c);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x40;
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 1;
    *(undefined *)(param_1 + 0x1f) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x13) = 0x20;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  bVar1 = *(byte *)(param_1 + 0x13);
  if ((*(byte *)(param_1 + 0x12) == 0) && (bVar1 < 0x56)) {
    bVar2 = *(byte *)(param_1 + 10) | 1;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) & 0xfe;
  }
  *(byte *)(param_1 + 10) = bVar2;
  uVar4 = *(byte *)(param_1 + 0x12) + 1;
  *(char *)(param_1 + 0x12) = (char)uVar4;
  if ((uVar4 & 0xff) == ((uint)bVar1 << 0x18) >> 0x1c) {
    *(byte *)(param_1 + 0x13) = bVar1 + 3;
    *(undefined *)(param_1 + 0x12) = 0;
  }
  *(undefined2 *)(param_1 + 0x4a) = *(undefined2 *)(iVar3 + 0x4a);
  if ((*(uint *)(iVar3 + 200) & 1) != 0) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}

