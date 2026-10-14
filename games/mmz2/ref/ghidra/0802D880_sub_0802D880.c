// sub_0802D880 at 0x0802D880 (thumb)

undefined4 sub_0802D880(int param_1)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0x1fc) == '\x05') &&
     (bVar1 = sub_08036CBC(param_1,1), (*(byte *)(param_1 + 0x196) & bVar1) != 0)) {
    *(undefined *)(param_1 + 0x2b8) = 1;
  }
  if (*(char *)(param_1 + 0x17f) == ';') {
    cVar3 = *(char *)(param_1 + 0x71);
    if (cVar3 < '\x04') {
      return in_lr;
    }
    if (('\x04' < cVar3) || (*(char *)(param_1 + 0x72) < '\x02')) {
      if (((*(char *)(param_1 + 0x1fc) == '\x05') || (*(char *)(param_1 + 0x2b8) == '\0')) &&
         ((*(byte *)(param_1 + 0x198 + (uint)*(byte *)(param_1 + 0x195)) & 2) != 0)) {
        *(undefined *)(param_1 + 0x2b8) = 0xff;
      }
      iVar4 = sub_080338F0(param_1,1);
      if ((0 < iVar4) && (cVar2 = sub_08036E60(param_1), cVar2 != '\0')) goto LAB_0802d99e;
      if ((*(char *)(param_1 + 0x1fc) == '\x05') && (-1 < *(char *)(param_1 + 0x2b8)))
      goto LAB_0802d9c2;
    }
    if ((cVar3 == '\x05') && (*(char *)(param_1 + 0x72) < '\x02')) {
      *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
      *(undefined *)(param_1 + 0x179) = 3;
    }
  }
  else {
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    iVar4 = sub_080338F0(param_1,1);
    if ((iVar4 < 1) || (cVar3 = sub_08036E60(param_1), cVar3 == '\0')) {
      if ((*(char *)(param_1 + 0x1fc) != '\x05') || (*(char *)(param_1 + 0x2b8) < '\x01')) {
        *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
        *(undefined *)(param_1 + 0x179) = 3;
        sub_0801EA38(param_1,0x3b,6,1);
        return in_lr;
      }
LAB_0802d9c2:
      sub_08034F4C(param_1);
      return in_lr;
    }
LAB_0802d99e:
    sub_08034ED4(param_1);
  }
  return in_lr;
}

