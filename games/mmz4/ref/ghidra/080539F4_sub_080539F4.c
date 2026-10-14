// sub_080539F4 at 0x080539F4 (thumb)

undefined4 sub_080539F4(int param_1)

{
  byte bVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  byte bVar5;
  undefined4 in_lr;
  
  bVar1 = (byte)DAT_0202e918 & 8;
  if ((DAT_0202e918 & 8) == 0) {
    uVar4 = (uint)*(byte *)(param_1 + 0xb4);
    bVar5 = *(byte *)(param_1 + 0xb5);
    cVar3 = *(char *)(*(int *)(&DAT_08854d1c + uVar4 * 4) + (uint)bVar5);
    if (cVar3 == -1) {
      uVar4 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar4 & 0x7fffffff;
      iVar2 = sub_08128A9C(uVar4 * 2 >> 0x11,3);
      uVar4 = iVar2 * 0x1000000 + 0x1000000U >> 0x18;
      bVar5 = 0;
      cVar3 = **(char **)(&DAT_08854d1c + uVar4 * 4);
    }
    *(char *)(param_1 + 0xd) = cVar3;
    *(byte *)(param_1 + 0xe) = bVar1;
    *(byte *)(param_1 + 0xf) = bVar1;
    *(byte *)(param_1 + 0xb4) = (byte)uVar4;
    *(byte *)(param_1 + 0xb5) = bVar5 + 1;
    if ((*(int *)(param_1 + 200) == 0) && (cVar3 == '\x02')) {
      sub_080539F4(param_1);
    }
  }
  else {
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

