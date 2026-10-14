// sub_0805B4C4 at 0x0805B4C4 (thumb)

undefined8 sub_0805B4C4(int param_1)

{
  char cVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0xe) != '\0') && (cVar1 = *(char *)(param_1 + 0x13), cVar1 != '\0')) {
    *(char *)(param_1 + 0x13) = cVar1 + -1;
    if (cVar1 == '\x01') {
      pbVar3 = (byte *)(param_1 + 0xb5);
      if (*pbVar3 == *(byte *)(param_1 + 0xb6)) {
        uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
        DAT_0202f608 = uVar4 & 0x7fffffff;
        iVar5 = sub_080FE4D8(uVar4 * 2 >> 0x11,0x10);
        bVar2 = (&DAT_080feb97)[iVar5];
        if ((uint)bVar2 == (int)(char)*pbVar3) {
          bVar2 = sub_0805B898(param_1);
        }
      }
      else {
        uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
        DAT_0202f608 = uVar4 & 0x7fffffff;
        iVar5 = sub_080FE4D8(uVar4 * 2 >> 0x11,0x10);
        bVar2 = (&DAT_080feb97)[iVar5];
      }
      *(byte *)(param_1 + 0xd) = bVar2;
      *(char *)(param_1 + 0xe) = cVar1 + -1;
      *(byte *)(param_1 + 0xb6) = *pbVar3;
      *pbVar3 = bVar2;
    }
  }
  return CONCAT44(in_lr,1);
}

