// sub_08052980 at 0x08052980 (thumb)

undefined4 sub_08052980(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  int local_24;
  undefined4 local_20;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0xa109);
    sub_08002B10(0xec);
    if ((*(byte *)(param_1 + 10) & 0x20) == 0) {
      uVar2 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(undefined4 *)(param_1 + 0x58) = uVar2;
      *(undefined4 *)(param_1 + 0x60) = 0xfffffa80;
      uVar2 = 0x40;
    }
    else {
      uVar2 = sub_08008748(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(undefined4 *)(param_1 + 0x58) = uVar2;
      *(undefined4 *)(param_1 + 0x60) = 0x100;
      uVar2 = 0x10;
    }
    *(undefined4 *)(param_1 + 0x68) = uVar2;
    if ((*(byte *)(DAT_0202dbf0 + 10) & 0x10) == 0) {
      *(undefined4 *)(param_1 + 0x5c) = 0x4c0;
      uVar2 = 0x800;
    }
    else {
      *(undefined4 *)(param_1 + 0x5c) = 0xfffffb40;
      uVar2 = 0xfffff800;
    }
    *(undefined4 *)(param_1 + 100) = uVar2;
    sub_08005784(param_1 + 0x74,&DAT_08854b58);
    iVar4 = *(int *)(param_1 + 0x54);
    uVar3 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar3 & 0x7fffffff;
    local_24 = iVar4 + 0x1000 + (uVar3 * 2 >> 0x11 & 0x1f) * -0x100;
    if ((*(byte *)(param_1 + 10) & 0x20) == 0) {
      local_20 = sub_08008534(iVar4,*(undefined4 *)(param_1 + 0x58));
      uVar3 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar3 & 0x7fffffff;
      sub_080D4898(&local_24,&DAT_08854bb8,0,(uVar3 * 2 >> 0x11 & 1) << 4);
      uVar3 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar3 & 0x7fffffff;
      sub_080D4898(&local_24,&DAT_08854bb8,0,(uVar3 * 2 >> 0x11 & 1) << 4);
      uVar3 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar3 & 0x7fffffff;
      sub_080D4898(&local_24,&DAT_08854c28,0,(uVar3 * 2 >> 0x11 & 1) << 4);
      uVar3 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar3 & 0x7fffffff;
      sub_080D4898(&local_24,&DAT_08854c28,0,(uVar3 * 2 >> 0x11 & 1) << 4);
      uVar3 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar3 & 0x7fffffff;
      sub_080D4898(&local_24,&DAT_08854c44,0,(uVar3 * 2 >> 0x11 & 1) << 4);
      uVar3 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar3 & 0x7fffffff;
      sub_080D4898(&local_24,&DAT_08854c44,0,(uVar3 * 2 >> 0x11 & 1) << 4);
    }
    else {
      local_20 = sub_08008748(iVar4,*(undefined4 *)(param_1 + 0x58));
      uVar3 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar3 & 0x7fffffff;
      sub_080D4898(&local_24,&DAT_08854c60,0,(uVar3 * 2 >> 0x11 & 1) << 4);
      uVar3 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      local_24 = *(int *)(param_1 + 0x54) + 0x1000 + (uVar3 * 2 >> 0x11 & 0x1f) * -0x100;
      uVar3 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar3 & 0x7fffffff;
      sub_080D4898(&local_24,&DAT_08854c60,0,(uVar3 * 2 >> 0x11 & 1) << 4);
      uVar3 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      local_24 = *(int *)(param_1 + 0x54) + 0x1000 + (uVar3 * 2 >> 0x11 & 0x1f) * -0x100;
      uVar3 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar3 & 0x7fffffff;
      sub_080D4898(&local_24,&DAT_08854c60,0,(uVar3 * 2 >> 0x11 & 1) << 4);
      uVar3 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      local_24 = *(int *)(param_1 + 0x54) + 0x1000 + (uVar3 * 2 >> 0x11 & 0x1f) * -0x100;
      uVar3 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar3 & 0x7fffffff;
      sub_080D4898(&local_24,&DAT_08854c7c,0,(uVar3 * 2 >> 0x11 & 1) << 4);
      uVar3 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      local_24 = *(int *)(param_1 + 0x54) + 0x1000 + (uVar3 * 2 >> 0x11 & 0x1f) * -0x100;
      uVar3 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar3 & 0x7fffffff;
      sub_080D4898(&local_24,&DAT_08854c7c,0,(uVar3 * 2 >> 0x11 & 1) << 4);
      uVar3 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      local_24 = *(int *)(param_1 + 0x54) + 0x1000 + (uVar3 * 2 >> 0x11 & 0x1f) * -0x100;
      uVar3 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar3 & 0x7fffffff;
      sub_080D4898(&local_24,&DAT_08854c7c,0,(uVar3 * 2 >> 0x11 & 1) << 4);
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  sVar1 = sub_08007C7C(*(int *)(param_1 + 0x54) + *(int *)(param_1 + 100),
                       *(undefined4 *)(param_1 + 0x58));
  if (sVar1 == 0) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
  }
  else {
    *(undefined *)(param_1 + 0xd) = 0x1b;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

