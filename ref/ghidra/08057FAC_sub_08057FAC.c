// sub_08057FAC at 0x08057FAC (thumb)

undefined4 sub_08057FAC(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  bVar1 = DAT_02022ae0 & 0x10;
  if ((DAT_02022ae0 & 0x10) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    return in_lr;
  }
  if ((*(ushort *)(param_1 + 0x90) & 0x40) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(byte *)(param_1 + 0xd) = bVar1;
    sub_080580F4(param_1);
    return in_lr;
  }
  sub_08058138(param_1);
  if ((*(ushort *)(param_1 + 0x90) & 1) != 0) {
    if (*(int *)(param_1 + 0x24) != 0) goto LAB_08058046;
    iVar2 = sub_08015A64(0,param_1,&DAT_082afba0);
    *(int *)(param_1 + 0x24) = iVar2;
    if (iVar2 == 0) goto LAB_080580cc;
    sub_0800561C(param_1 + 0x74,&DAT_082afb84);
  }
  if (*(int *)(param_1 + 0x24) == 0) {
LAB_080580cc:
    iVar2 = sub_08048BE8(param_1);
    if (iVar2 != 0) {
      return in_lr;
    }
    sub_080C8A98(param_1,*(undefined4 *)(&DAT_082afb4c + (uint)*(byte *)(param_1 + 0xd) * 4));
    return in_lr;
  }
LAB_08058046:
  iVar3 = param_1 + 0x6c;
  sub_080033F0(iVar3,1);
  sub_08003458(iVar3);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  iVar2 = sub_08015D94(*(undefined4 *)(param_1 + 0x24));
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0x24) = 0;
    sub_0800561C(param_1 + 0x74,&DAT_082afb68);
    sub_080033F0(iVar3,7);
    sub_08003458(iVar3);
    *(undefined *)(param_1 + 0x46) =
         *(undefined *)
          (*(char *)(param_1 + 0x71) * 4 +
          *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  }
  return in_lr;
}

