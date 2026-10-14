// sub_08035A40 at 0x08035A40 (thumb)

undefined8 sub_08035A40(int param_1,undefined4 param_2)

{
  char cVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = (int)*(char *)(param_1 + 699);
  pbVar2 = (byte *)(param_1 + 0x2b8);
  if ((*pbVar2 == 0) && (cVar1 = sub_08037150(param_1), cVar1 == '\x01')) {
    *pbVar2 = *pbVar2 | 1;
    cVar1 = sub_08036E60(param_1);
    if (cVar1 == '\0') {
      iVar3 = sub_08035984(param_1,param_2);
    }
    *(char *)(param_1 + 699) = (char)iVar3;
  }
  return CONCAT44(in_lr,iVar3);
}

