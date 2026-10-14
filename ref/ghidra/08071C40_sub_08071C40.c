// sub_08071C40 at 0x08071C40 (thumb)

undefined4 sub_08071C40(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  undefined4 in_lr;
  
  if ((*(ushort *)(param_1 + 0x90) & 0x40) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 1;
    iVar1 = param_1 + 0x4c;
    sub_0808827C(1,iVar1);
    uVar2 = DAT_02022890 * 0x343fd + 0x269ec3;
    uVar3 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar3 & 0x7fffffff;
    sub_08098FA0(param_1,0x1ff - (uVar2 * 2 >> 0x11 & 0x3ff),(-8 - (uVar3 * 2 >> 0x11 & 7)) * 0x40,0
                );
    uVar2 = DAT_02022890 * 0x343fd + 0x269ec3;
    uVar3 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar3 & 0x7fffffff;
    sub_08098FA0(param_1,0x1ff - (uVar2 * 2 >> 0x11 & 0x3ff),(-8 - (uVar3 * 2 >> 0x11 & 7)) * 0x40,1
                );
    uVar2 = DAT_02022890 * 0x343fd + 0x269ec3;
    uVar3 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar3 & 0x7fffffff;
    sub_08098FA0(param_1,0x1ff - (uVar2 * 2 >> 0x11 & 0x3ff),(-8 - (uVar3 * 2 >> 0x11 & 7)) * 0x40,2
                );
    *(undefined *)(param_1 + 0xc6) = 1;
    sub_08015698(1,iVar1);
    if (DAT_02022b2c < 9999) {
      DAT_02022b2c = DAT_02022b2c + 1;
    }
    sub_08015794(param_1,iVar1);
    sub_08071ACC(param_1);
    return in_lr;
  }
  piVar4 = (int *)(param_1 + 0xc0);
  if ((*(ushort *)(param_1 + 0x90) & 1) != 0) {
    if (*piVar4 != 0) goto LAB_08071dbe;
    iVar1 = sub_08015A64(0,param_1,&DAT_082b136c);
    *piVar4 = iVar1;
    if (iVar1 == 0) goto LAB_08071e18;
    sub_0800561C(param_1 + 0x74,&DAT_082b1350);
  }
  if (*piVar4 == 0) {
LAB_08071e18:
    iVar1 = sub_08048BE8(param_1);
    if (iVar1 == 0) {
      sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b1300 + (uint)*(byte *)(param_1 + 0xd) * 4));
      return in_lr;
    }
    if (*(char *)(param_1 + 0xd) == '\0') {
      return in_lr;
    }
    sub_08003458(param_1 + 0x6c);
    *(undefined *)(param_1 + 0x46) =
         *(undefined *)
          (*(char *)(param_1 + 0x71) * 4 +
          *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
    return in_lr;
  }
LAB_08071dbe:
  if (*(char *)(param_1 + 0xd) != '\0') {
    sub_08003458(param_1 + 0x6c);
    *(undefined *)(param_1 + 0x46) =
         *(undefined *)
          (*(char *)(param_1 + 0x71) * 4 +
          *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  }
  iVar1 = sub_08015D94(*piVar4);
  if (iVar1 != 0) {
    *piVar4 = 0;
    sub_0800561C(param_1 + 0x74,&DAT_082b1318);
  }
  return in_lr;
}

