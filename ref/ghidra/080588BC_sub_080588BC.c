// sub_080588BC at 0x080588BC (thumb)

undefined4 sub_080588BC(int param_1)

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
    sub_080589FC(param_1);
    return in_lr;
  }
  if ((*(ushort *)(param_1 + 0x90) & 1) != 0) {
    if (*(int *)(param_1 + 0x24) != 0) goto LAB_0805894e;
    iVar2 = sub_08015A64(0,param_1,&DAT_082afc3c);
    *(int *)(param_1 + 0x24) = iVar2;
    if (iVar2 == 0) goto LAB_080589d4;
    sub_0800561C(param_1 + 0x74,&DAT_082afc20);
  }
  if (*(int *)(param_1 + 0x24) == 0) {
LAB_080589d4:
    iVar2 = sub_08048BE8(param_1);
    if (iVar2 != 0) {
      return in_lr;
    }
    sub_080C8A98(param_1,*(undefined4 *)(&DAT_082afbbc + (uint)*(byte *)(param_1 + 0x10) * 4));
    return in_lr;
  }
LAB_0805894e:
  iVar3 = param_1 + 0x6c;
  sub_080033F0(iVar3,2);
  sub_08003458(iVar3);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  iVar2 = sub_08015D94(*(undefined4 *)(param_1 + 0x24));
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0x24) = 0;
    sub_0800561C(param_1 + 0x74,&DAT_082afc04);
    sub_080033F0(iVar3,0);
    sub_08003458(iVar3);
    *(undefined *)(param_1 + 0x46) =
         *(undefined *)
          (*(char *)(param_1 + 0x71) * 4 +
          *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  }
  return in_lr;
}

