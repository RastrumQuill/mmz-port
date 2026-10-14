// sub_08093AF8 at 0x08093AF8 (thumb)

undefined4 sub_08093AF8(int param_1)

{
  char cVar1;
  undefined uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(uint *)(param_1 + 0xb8) = *(uint *)(param_1 + 0xb8) & 0xfffffffe;
    sub_08017700(param_1,0x8e06);
    sub_080177F4(param_1);
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  uVar3 = sub_08093538(param_1);
  iVar4 = (*(int *)(DAT_0202f5c0 + 0x54) + -0x6000 + (uVar3 & 0xff) * 0xc000) -
          *(int *)(param_1 + 0x54);
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0x1f;
  }
  iVar4 = iVar4 >> 5;
  if (((uVar3 & 0xff) == 2) || (cVar1 = sub_08093500(param_1,iVar4), cVar1 == '\0')) {
    uVar2 = 1;
    goto LAB_08093c1e;
  }
  cVar1 = sub_080935B0(param_1,iVar4);
  if (cVar1 == '\0') {
    iVar5 = *(int *)(param_1 + 0x5c) + iVar4;
    *(int *)(param_1 + 0x5c) = iVar5;
    if (iVar5 < 0x101) {
      if (-0x101 < iVar5) goto LAB_08093c0c;
      *(int *)(param_1 + 0x5c) = iVar5 + 0x100;
    }
    else {
      *(int *)(param_1 + 0x5c) = iVar5 + -0x100;
    }
    *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) & 7;
    if (iVar4 < 1) {
      cVar1 = *(char *)(param_1 + 0x12) + '\x01';
    }
    else {
      cVar1 = *(char *)(param_1 + 0x12) + -1;
    }
    *(char *)(param_1 + 0x12) = cVar1;
    sub_080177CC(param_1,0x8e06,*(undefined *)(param_1 + 0x12),1);
    sub_080177F4(param_1);
  }
  else {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
  }
LAB_08093c0c:
  cVar1 = sub_0809357C(param_1,1);
  if (cVar1 != '\0') {
    return in_lr;
  }
  uVar2 = 5;
LAB_08093c1e:
  *(undefined *)(param_1 + 0xd) = uVar2;
  *(undefined *)(param_1 + 0xe) = 0;
  return in_lr;
}

