// sub_0810B4B8 at 0x0810B4B8 (thumb)

undefined4 sub_0810B4B8(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0x11) == '\0') {
    bVar1 = *(byte *)(iVar2 + 0xde4);
  }
  else {
    if (*(char *)(iVar2 + 2) != '\x02') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    bVar1 = *(byte *)(iVar2 + 0xdcf);
  }
  *(uint *)(param_1 + 0x58) = (uint)bVar1 * 0x2000 + 0x2000;
  sub_0801CFF0(param_1);
  return in_lr;
}

