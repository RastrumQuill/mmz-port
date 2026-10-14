// sub_0808ABFC at 0x0808ABFC (thumb)

undefined4 sub_0808ABFC(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  undefined4 in_lr;
  undefined4 local_28;
  int local_24;
  undefined4 local_20;
  int local_1c;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    pbVar5 = (byte *)(param_1 + 0xc0);
    sub_0801CF00(param_1,(uint)*pbVar5 * 0x20000 + 0x200f0000 >> 0x10);
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    uVar3 = (uint)*(byte *)(param_1 + 0xb4);
    local_28 = *(undefined4 *)(param_1 + 0x54);
    local_24 = *(int *)(param_1 + 0x58) + -0x1000;
    if (*pbVar5 == 1) {
      local_24 = *(int *)(param_1 + 0x58) + 0x1a00;
    }
    if (uVar3 == (*(byte *)(param_1 + 10) >> 4 & 1)) {
      uVar3 = uVar3 ^ 1;
    }
    *(uint *)(param_1 + 0x5c) = uVar3 * -0x200 + 0x100;
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) >> 1;
    sub_080D8A64(param_1,*pbVar5);
    *(undefined *)(param_1 + 0x12) = 0x14;
    iVar2 = *(int *)(param_1 + 0x5c) * 0xb4;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar2 >> 8;
    iVar2 = *(int *)(param_1 + 0x60) * 0xb4;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xff;
    }
    *(int *)(param_1 + 0x60) = iVar2 >> 8;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_0801CFF0(param_1);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  iVar2 = sub_08007DB4(*(undefined4 *)(param_1 + 0x54));
  if (iVar2 < 0) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar2;
  }
  iVar2 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar2;
  if (*(int *)(param_1 + 0x5c) < 1) {
    iVar2 = sub_0800834C(iVar2,*(undefined4 *)(param_1 + 0x58));
    if (iVar2 < 1) goto LAB_0808ad06;
  }
  else {
    iVar2 = sub_0800816C(iVar2,*(undefined4 *)(param_1 + 0x58));
    if (-1 < iVar2) goto LAB_0808ad06;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar2;
LAB_0808ad06:
  iVar2 = *(int *)(param_1 + 0x5c) * 0xe1;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  *(int *)(param_1 + 0x5c) = iVar2 >> 8;
  if (((*(int *)(param_1 + 0x60) != 0) || (*(char *)(param_1 + 0xc0) == '\x01')) &&
     (iVar2 = *(int *)(param_1 + 0x60) + 0x40, *(int *)(param_1 + 0x60) = iVar2, 0x700 < iVar2)) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    uVar3 = *(byte *)(param_1 + 10) & 0xfe;
    *(char *)(param_1 + 10) = (char)uVar3;
    local_28 = *(undefined4 *)(param_1 + 0x54);
    local_1c = *(int *)(param_1 + 0x58);
    local_24 = local_1c + -0x1000;
    uVar4 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar4 & 0x7fffffff;
    uVar4 = uVar4 * 2 >> 0x11 & 3;
    local_20 = local_28;
    sub_080D8B04(&local_20,uVar3 >> 4 & 1,0x200c,uVar4,0);
    sub_080D8B04(&local_20,*(byte *)(param_1 + 10) >> 4 & 1,0x200d,uVar4,0);
    sub_080D8B04(&local_20,*(byte *)(param_1 + 10) >> 4 & 1,0x200e,uVar4,0);
    sub_080D0894(1,&local_28);
    sub_08002B10(0x2a);
    sub_0802AB70(3,2,param_1 + 0x54);
    if (DAT_0202e8ec < 9999) {
      DAT_0202e8ec = DAT_0202e8ec + 1;
    }
    sub_0802ABC8(param_1,param_1 + 0x54);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  }
  return in_lr;
}

