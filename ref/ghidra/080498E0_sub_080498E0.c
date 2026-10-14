// sub_080498E0 at 0x080498E0 (thumb)

undefined4 sub_080498E0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 in_lr;
  
  if ((DAT_02022ae0 & 0x10) != 0) {
LAB_08049948:
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    return in_lr;
  }
  if ((*(ushort *)(param_1 + 0x90) & 0x40) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_08049AC4(param_1);
    return in_lr;
  }
  if (*(char *)(param_1 + 0x10) == '\x05') {
    if ((*(int *)(param_1 + 0x4c) < *(int *)(DAT_0202286c + 0x4c)) &&
       (uVar1 = sub_08013D9C(&DAT_02022c44,param_1 + 0x4c), 0x8000 < uVar1)) goto LAB_08049948;
  }
  else if (*(char *)(param_1 + 0x10) == '\x04') {
    iVar2 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    *(int *)(param_1 + 0x50) = iVar2 + 0x100;
  }
  if (*(char *)(param_1 + 0x10) != '\a') {
    sub_08049B08(param_1);
  }
  if (((DAT_02022b60 == 10) && (*(int *)(DAT_0202286c + 0x4c) < *(int *)(param_1 + 0x4c))) &&
     (uVar1 = sub_08013D9C(&DAT_02022c44,param_1 + 0x4c), 0x4000 < uVar1)) {
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  iVar2 = sub_08048BE8(param_1);
  if (iVar2 != 0) {
    *(undefined *)(param_1 + 0xd) = 6;
  }
  piVar4 = (int *)(param_1 + 0xc0);
  if ((*(ushort *)(param_1 + 0x90) & 1) != 0) {
    if (*piVar4 != 0) goto LAB_08049a10;
    iVar2 = sub_08015A64(0,param_1,&DAT_082aedf0);
    *piVar4 = iVar2;
    if (iVar2 == 0) goto LAB_08049aa0;
    sub_080033F0(param_1 + 0x6c,0);
    sub_0800561C(param_1 + 0x74,&DAT_082aedd4);
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  if (*piVar4 == 0) {
LAB_08049aa0:
    sub_080C8A98(param_1,*(undefined4 *)
                          (&DAT_082aecc4 +
                          ((uint)*(byte *)(param_1 + 0xd) + (uint)*(byte *)(param_1 + 0x10) * 7) * 4
                          ));
    return in_lr;
  }
LAB_08049a10:
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  iVar2 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  if (*(int *)(param_1 + 0x50) < iVar2) {
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
    iVar2 = *(int *)(param_1 + 0x58) + 0x40;
    *(int *)(param_1 + 0x58) = iVar2;
    if (0x700 < iVar2) {
      *(undefined4 *)(param_1 + 0x58) = 0x700;
    }
  }
  else {
    uVar3 = sub_08008360(*(undefined4 *)(param_1 + 0x4c));
    *(undefined4 *)(param_1 + 0x50) = uVar3;
  }
  iVar2 = sub_08015D94(*piVar4);
  if (iVar2 != 0) {
    *piVar4 = 0;
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 1;
    sub_0800561C(param_1 + 0x74,&DAT_082aedb8);
  }
  return in_lr;
}

