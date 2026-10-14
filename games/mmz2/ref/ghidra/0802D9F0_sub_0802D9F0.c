// sub_0802D9F0 at 0x0802D9F0 (thumb)

undefined4 sub_0802D9F0(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = sub_080338F0(param_1,1);
  if ((0 < iVar3) && (cVar1 = sub_08036E60(param_1), cVar1 != '\0')) {
    sub_08034ED4(param_1);
    return in_lr;
  }
  if ((*(char *)(param_1 + 0x1fc) == '\x05') &&
     (('\0' < *(char *)(param_1 + 0x2b8) ||
      (bVar2 = sub_08036CBC(param_1,1), (*(byte *)(param_1 + 0x196) & bVar2) != 0)))) {
    sub_08034F4C(param_1);
  }
  else if ((*(byte *)(param_1 + 0x198 + (uint)*(byte *)(param_1 + 0x195)) & 2) == 0) {
    *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
    *(undefined *)(param_1 + 0x179) = 4;
    sub_0801E9FC(param_1,0x3c);
  }
  return in_lr;
}

