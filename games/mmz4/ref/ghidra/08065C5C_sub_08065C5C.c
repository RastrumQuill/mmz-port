// sub_08065C5C at 0x08065C5C (thumb)

undefined4 sub_08065C5C(int param_1)

{
  undefined uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  
  uVar5 = (uint)*(byte *)(param_1 + 0xce) * 8;
  if (uVar5 < 0x20) {
    uVar3 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar3 & 0x7fffffff;
    iVar4 = 2;
    if (uVar5 <= (uVar3 * 2 >> 0x11 & 0x1f)) goto LAB_08065c8a;
  }
  iVar4 = 4;
LAB_08065c8a:
  uVar1 = (&DAT_08857b98)[iVar4];
  if (iVar4 == 2) {
    cVar2 = *(char *)(param_1 + 0xce) + '\x01';
  }
  else {
    cVar2 = '\0';
  }
  *(char *)(param_1 + 0xce) = cVar2;
  *(undefined *)(param_1 + 0xd) = uVar1;
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  return in_lr;
}

