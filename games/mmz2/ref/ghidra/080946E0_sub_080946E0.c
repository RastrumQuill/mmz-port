// sub_080946E0 at 0x080946E0 (thumb)

undefined4 sub_080946E0(int param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0x28);
  if ((*(char *)(param_1 + 0x10) == '\0') || (*(char *)(param_1 + 0x10) == '\x03')) {
    uVar2 = sub_08015188(&DAT_0202ed18,param_1 + 0x54);
    if (0x8000 < uVar2) goto LAB_0809472c;
    cVar1 = sub_08094448(param_1);
    if (cVar1 != '\0') goto LAB_08094834;
  }
  if (*(char *)(param_1 + 0x10) != '\x04') {
    if ((*(uint *)(param_1 + 0x8c) & 0x200) != 0) {
LAB_08094834:
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
      sub_080948D4(param_1);
      return in_lr;
    }
LAB_08094854:
    if (*(char *)(param_1 + 0xf) == '\0') {
      iVar6 = sub_08065A24(param_1);
      if (iVar6 != 0) {
        *(undefined *)(param_1 + 0xf) = 1;
      }
      if (*(char *)(param_1 + 0xf) == '\0') {
        sub_080EF118(param_1,*(undefined4 *)(&DAT_08342ba0 + (uint)*(byte *)(param_1 + 0xd) * 4));
        sub_080EF118(param_1,*(undefined4 *)(&DAT_08342bd0 + (uint)*(byte *)(param_1 + 0xd) * 4));
        return in_lr;
      }
    }
    if ((*(char *)(param_1 + 0x10) == '\0') || (*(char *)(param_1 + 0x10) == '\x03')) {
      sub_08094370(param_1,0,0x100);
    }
    if (*(char *)(param_1 + 0xf) == '\x01') {
      sub_080128D4(param_1);
      *(undefined *)(param_1 + 0xf) = 2;
    }
    iVar6 = sub_08065A24(param_1);
    if (iVar6 != 0) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0xf) = 0;
    return in_lr;
  }
  if (*(byte *)(iVar6 + 0xc) != 4) {
    if (*(byte *)(iVar6 + 0xc) < 2) {
      if ((*(uint *)(param_1 + 0x8c) & 0x200) != 0) {
        sub_0809449C(iVar6);
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
        *(uint *)(param_1 + 0x8c) = 0;
        *(undefined4 *)(param_1 + 0x90) = 0;
        *(undefined *)(param_1 + 0x94) = 0;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
        *(undefined4 *)(param_1 + 0xc) = 3;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
        uVar4 = *(undefined4 *)(iVar6 + 0x54);
        uVar5 = *(undefined4 *)(iVar6 + 0x58);
        uVar2 = sub_08094370(iVar6,0,1);
        uVar3 = sub_08094370(iVar6,0,0xffffffff);
        *(undefined4 *)(iVar6 + 0x54) = uVar4;
        *(undefined4 *)(iVar6 + 0x58) = uVar5;
        if (((uVar2 & 0xff | uVar3 & 0xff) & 1) != 0) {
          *(undefined4 *)(iVar6 + 0xc) = 2;
          *(undefined4 *)(iVar6 + 0x14) =
               *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(iVar6 + 9) * 4) + 8);
          sub_080948D4(iVar6);
          return in_lr;
        }
        sub_080127E4(iVar6,0x9807);
        sub_080128D4(iVar6);
        *(undefined *)(iVar6 + 0xd) = 8;
        *(undefined *)(iVar6 + 0xe) = 0;
        return in_lr;
      }
      goto LAB_08094854;
    }
    sub_0809449C(iVar6);
  }
LAB_0809472c:
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  *(undefined4 *)(param_1 + 0xc) = 3;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  return in_lr;
}

