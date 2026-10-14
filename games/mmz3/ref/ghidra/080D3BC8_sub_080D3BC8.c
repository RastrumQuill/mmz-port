// sub_080D3BC8 at 0x080D3BC8 (thumb)

undefined4 sub_080D3BC8(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    iVar2 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(int *)(param_1 + 0x58) = iVar2 + -0x1800;
    DAT_0202fb80 = 0x385;
    DAT_0202f980 = 5;
    sub_0800393C(&DAT_085d8758,0x130a0);
    sub_08003E14(&DAT_085d8764,(DAT_0202f980 - 4) * 0x20 + 0x200);
    sub_08017700(param_1,0xb802);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  else if (*(char *)(param_1 + 0xd) != '\x01') {
    return in_lr;
  }
  sub_080177F4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    sub_08017700(param_1,0xb802);
  }
  uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
  DAT_0202f608 = uVar3 & 0x7fffffff;
  if ((uVar3 * 2 >> 0x11 & 0x1f) == 0) {
    sub_08017700(param_1,0xb803);
  }
  if (*(char *)(param_1 + 0x11) != '\0') {
    uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar3 & 0x7fffffff;
    if ((uVar3 * 2 >> 0x11 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 1;
    }
    *(byte *)(param_1 + 10) = bVar1;
  }
  return in_lr;
}

