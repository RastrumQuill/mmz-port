// sub_08059D74 at 0x08059D74 (thumb)

undefined4 sub_08059D74(int param_1)

{
  char cVar1;
  byte bVar2;
  uint *puVar3;
  int iVar4;
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xbd) = 0;
  if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
    sub_08006984(0x46);
  }
  iVar4 = *(int *)(param_1 + 200);
  if (iVar4 != 0) {
    cVar1 = *(char *)(param_1 + 0xbf);
    if (((((cVar1 == '\x01') || (cVar1 == '\x02')) || (cVar1 == '\x04')) ||
        ((cVar1 == '\x05' || (cVar1 == '\x03')))) && (1 < *(byte *)(iVar4 + 0xc))) {
      *(int *)(param_1 + 200) = 0;
      *(char *)(param_1 + 0xbf) = -1;
    }
  }
  puVar3 = (uint *)(param_1 + 0x8c);
  if ((((*puVar3 & 0x200) != 0) || (*(short *)(param_1 + 0xa4) == 0)) &&
     (bVar2 = (byte)DAT_0202e918 & 8, (DAT_0202e918 & 8) == 0)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08854834 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    if ((*puVar3 & 0x10000) == 0) {
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0xf) = 0;
    }
    else {
      *(undefined *)(param_1 + 0xd) = 1;
      *(byte *)(param_1 + 0xe) = bVar2;
      *(byte *)(param_1 + 0xf) = bVar2;
    }
    sub_0805B910(param_1);
    return in_lr;
  }
  if ((*puVar3 & 1) == 0) {
LAB_08059e66:
    if (*(int *)(param_1 + 0x2c) == 0) goto LAB_08059e78;
  }
  else if (*(int *)(param_1 + 0x2c) == 0) {
    iVar4 = sub_0802AD94(0xb,param_1,&DAT_088553d8);
    *(int *)(param_1 + 0x2c) = iVar4;
    if (iVar4 == 0) goto LAB_08059e78;
    bVar2 = *(byte *)(param_1 + 0xd);
    if ((bVar2 != 1) && (((bVar2 == 0 || (10 < bVar2)) || (bVar2 < 8)))) {
      *(undefined *)(param_1 + 0xd) = 10;
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0xf) = 0;
    }
    goto LAB_08059e66;
  }
  iVar4 = sub_0802B3CC();
  if (iVar4 != 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
LAB_08059e78:
  sub_08128884(param_1,*(undefined4 *)(&DAT_088552d4 + (uint)*(byte *)(param_1 + 0xd) * 4));
  sub_0805C238(param_1);
  return in_lr;
}

