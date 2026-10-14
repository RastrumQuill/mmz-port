// sub_08057178 at 0x08057178 (thumb)

undefined4 sub_08057178(int param_1)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08017700(param_1,0xb31c);
    *(undefined *)(param_1 + 0xe) = 0;
    iVar2 = DAT_0202f5c0;
    *(bool *)(param_1 + 0x4c) = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202f5c0 + 0x54);
    bVar1 = *(int *)(param_1 + 0x54) < *(int *)(iVar2 + 0x54);
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    if (bVar1) {
      bVar3 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar3 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar3;
    sub_080C0BD4(param_1,2,0);
    sub_080A9CCC(param_1,1,0);
    *(undefined *)(param_1 + 0xc6) = 0;
  }
  sub_080177F4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar4 = 0x200;
    }
    else {
      uVar4 = 0xfffffe00;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar4;
    *(undefined4 *)(param_1 + 0x60) = 0xfffffe00;
    *(undefined *)(param_1 + 0xd) = 0x19;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

