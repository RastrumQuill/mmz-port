// sub_0805E838 at 0x0805E838 (thumb)

undefined4 sub_0805E838(int param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  undefined4 in_lr;
  
  bVar2 = *(byte *)(param_1 + 0xe);
  if (bVar2 != 1) {
    if (1 < bVar2) {
      if (bVar2 == 2) {
        sub_0800471C(0xeb);
        sub_080ADD30(param_1,0xb);
        sub_08017700(param_1,0xf00);
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar2 != 3) goto LAB_0805e940;
      sub_08017934(param_1);
      sub_080177F4(param_1);
      if (*(char *)(param_1 + 0x73) == '\x03') {
        *(undefined *)(param_1 + 0xd) = 0x16;
        *(undefined *)(param_1 + 0xe) = 0;
      }
      goto LAB_0805e940;
    }
    if (bVar2 != 0) goto LAB_0805e940;
    sub_0800471C(0xea);
    sub_080ADD30(param_1,10);
    sub_08017700(param_1,0xe00);
    iVar3 = *(int *)(DAT_0202f5c0 + 0x54);
    *(int *)(param_1 + 100) = iVar3;
    bVar1 = *(int *)(param_1 + 0x54) < iVar3;
    *(bool *)(param_1 + 0x4c) = bVar1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(uint *)(param_1 + 0x54) = *(int *)(param_1 + 100) + 0x1800 + (uint)bVar1 * -0x3000;
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(DAT_0202f5c0 + 0x58);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_08017934(param_1);
  sub_080177F4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
LAB_0805e940:
  iVar3 = DAT_0202f5c0;
  *(undefined4 *)(DAT_0202f5c0 + 0x54) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(iVar3 + 0x58) = *(undefined4 *)(param_1 + 0x68);
  return in_lr;
}

