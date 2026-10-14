// sub_0805B1C0 at 0x0805B1C0 (thumb)

undefined4 sub_0805B1C0(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf3 | 8;
    sub_0800561C(param_1 + 0x74,&DAT_082afd68);
    sub_080033F0(param_1 + 0x6c,8);
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  cVar1 = *(char *)(param_1 + 0x12) + '\x01';
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\x14') {
    sub_08001EAC(0x27);
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  if (*(char *)(param_1 + 0x73) == '\x03') {
    uVar2 = DAT_02022890 * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar2 & 0x7fffffff;
    if ((uVar2 * 2 >> 0x11 & 1) != 0) {
      cVar1 = *(char *)(param_1 + 0xc0) + '\x01';
      *(char *)(param_1 + 0xc0) = cVar1;
      if (cVar1 == '\x03') {
        *(undefined *)(param_1 + 0x10) = 1;
      }
      iVar3 = sub_08005428(DAT_02022e98);
      if (iVar3 != 0) {
        *(undefined *)(iVar3 + 9) = 0x19;
        *(undefined4 *)(iVar3 + 0x14) = 0x8059c51;
        *(undefined2 *)(iVar3 + 0x1c) = DAT_02022ed2;
        *(undefined *)(iVar3 + 0x1e) = DAT_02022f49;
        uVar2 = DAT_02022890 * 0x343fd + 0x269ec3;
        DAT_02022890 = uVar2 & 0x7fffffff;
        if ((uVar2 * 2 >> 0x11 & 1) == 0) {
          iVar4 = 0x97ff;
        }
        else {
          iVar4 = -0x9800;
        }
        *(int *)(iVar3 + 0x4c) = DAT_02022c7c + iVar4;
        *(undefined *)(iVar3 + 0x10) = 1;
        *(undefined *)(iVar3 + 0x11) = 2;
      }
    }
    sub_0805985C(param_1);
  }
  return in_lr;
}

