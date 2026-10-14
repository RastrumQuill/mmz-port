// sub_0802CFC8 at 0x0802CFC8 (thumb)

undefined4 sub_0802CFC8(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xf);
  if (bVar1 == 1) {
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    iVar2 = (int)*(short *)(param_1 + 0xfa);
    if (iVar2 != -1) {
      sub_08004768(iVar2);
      *(short *)(param_1 + 0xfa) = -1;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  }
  else {
    if (1 < bVar1) {
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_08017700(param_1,0x3601);
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  return in_lr;
}

