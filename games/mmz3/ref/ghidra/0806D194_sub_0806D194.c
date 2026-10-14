// sub_0806D194 at 0x0806D194 (thumb)

undefined4 sub_0806D194(int param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  if ((*(uint *)(param_1 + 0x8c) & 0x200) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_0806CEA8(param_1);
    return in_lr;
  }
  if (*(char *)(param_1 + 0xd) != '\0') {
    sub_080177F4(param_1);
    iVar5 = *(int *)(param_1 + 0x58);
    *(int *)(param_1 + 0x58) = iVar5 + -0x200;
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if ((cVar2 != -1) &&
       (sVar3 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54),iVar5 + -0xe00), sVar3 == 0)) {
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_0806CEA8(param_1);
    return in_lr;
  }
  if (*(char *)(iVar5 + 0xd) == '\b') {
    sub_08007390(param_1 + 0x74,&DAT_08362eb8);
  }
  else {
    sub_08007390(param_1 + 0x74,&DAT_08362ea0);
    iVar4 = sub_08063614(iVar5);
    if (iVar4 == 0) {
      sub_080177F4(param_1);
    }
  }
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar5 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar5 + 0x58);
  if (1 < *(byte *)(iVar5 + 0xc)) {
    if (*(char *)(iVar5 + 0xbd) == '\0') {
      bVar1 = *(byte *)(param_1 + 10);
      goto LAB_0806d248;
    }
    *(undefined *)(param_1 + 0x12) = 0x40;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  cVar2 = sub_08009038(*(undefined4 *)(iVar5 + 0x54),*(int *)(iVar5 + 0x58) + -0x1800);
  if (cVar2 == '\0') {
    return in_lr;
  }
  bVar1 = *(byte *)(param_1 + 10);
LAB_0806d248:
  *(byte *)(param_1 + 10) = bVar1 & 0xfc;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  *(undefined4 *)(param_1 + 0xc) = 3;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  return in_lr;
}

