// sub_08047A40 at 0x08047A40 (thumb)

undefined4 sub_08047A40(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xa502);
    if (*(char *)(param_1 + 0xf) == '\x18') {
      if (*(int *)(param_1 + 0xc4) + 0xd000 < *(int *)(DAT_0202e130 + 0x54)) {
        uVar1 = sub_080EF150(*(int *)(param_1 + 0xc4) - (*(int *)(param_1 + 0x54) + -0x1800),0x30);
        *(undefined4 *)(param_1 + 0x5c) = uVar1;
        *(undefined *)(param_1 + 0x4c) = 1;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 0x10;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      }
      else {
        uVar1 = sub_080EF150(*(int *)(param_1 + 200) - (*(int *)(param_1 + 0x54) + 0x1800),0x30);
        *(undefined4 *)(param_1 + 0x5c) = uVar1;
        *(undefined *)(param_1 + 0x4c) = 0;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      }
    }
    else {
      uVar1 = sub_080EF150(*(int *)(param_1 + 0xc4) - (*(int *)(param_1 + 0x54) + -0xd000),0x30);
      *(undefined4 *)(param_1 + 0x5c) = uVar1;
    }
    *(undefined4 *)(param_1 + 0x60) = 0xfffffa00;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  iVar3 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar3;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  uVar2 = *(int *)(param_1 + 0x58) + iVar3;
  *(uint *)(param_1 + 0x58) = uVar2;
  if (*(uint *)(param_1 + 0xd4) < uVar2) {
    *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0xd4);
    *(undefined *)(param_1 + 0xd) = 0x1e;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

