// sub_0806D32C at 0x0806D32C (thumb)

undefined4 sub_0806D32C(int param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  undefined auStack_38 [4];
  undefined auStack_34 [4];
  undefined auStack_30 [4];
  undefined auStack_2c [4];
  char *local_28;
  undefined *local_24;
  
  sub_080C8D70(auStack_38,&DAT_080c9310,3);
  sub_080C8D70(auStack_34,&DAT_080c9319,3);
  sub_080C8D70(auStack_30,&DAT_080c931c,3);
  sub_080C8D70(auStack_2c,&DAT_080c9310,3);
  bVar2 = (byte)*(ushort *)(param_1 + 0x90) & 0x40;
  if ((*(ushort *)(param_1 + 0x90) & 0x40) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 1;
    sub_0806CEA4(param_1);
    return in_lr;
  }
  iVar4 = sub_08048BE8(param_1);
  iVar5 = param_1 + 0x6c;
  local_28 = (char *)(param_1 + 0x71);
  local_24 = (undefined *)(param_1 + 0x46);
  if (iVar4 != 0) {
    sub_080033F0(iVar5,auStack_2c[*(byte *)(param_1 + 0x10) & 0xf]);
    sub_08003458(iVar5);
    *local_24 = *(undefined *)
                 (*local_28 * 4 +
                 *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x11) + ' ';
    *(byte *)(param_1 + 0xd) = bVar2;
  }
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 == 1) {
    cVar3 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar3;
    if (cVar3 != -1) goto LAB_0806d4ac;
    sub_080033F0(iVar5,auStack_30[*(byte *)(param_1 + 0x10)]);
  }
  else {
    if (1 < bVar1) {
      if ((bVar1 == 2) && (*(char *)(param_1 + 0x73) == '\x03')) {
        sub_080033F0(iVar5,auStack_38[*(byte *)(param_1 + 0x10)]);
        *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x11) + ' ';
        *(byte *)(param_1 + 0xd) = bVar2;
      }
      goto LAB_0806d4ac;
    }
    if ((bVar1 != 0) ||
       (cVar3 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar3, cVar3 != -1))
    goto LAB_0806d4ac;
    sub_080033F0(iVar5,auStack_34[*(byte *)(param_1 + 0x10)]);
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x11) + ' ';
    sub_0806CE10(param_1,*(char *)(param_1 + 0x10) + '\x03',*(undefined *)(param_1 + 0x12));
    iVar4 = sub_08013D9C(&DAT_02022c44,param_1 + 0x4c);
    if (iVar4 == 0) {
      sub_08001EAC(0xbf);
    }
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
LAB_0806d4ac:
  sub_08003458(iVar5);
  *local_24 = *(undefined *)
               (*local_28 * 4 +
               *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  return in_lr;
}

