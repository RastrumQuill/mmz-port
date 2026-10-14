// sub_080B801C at 0x080B801C (thumb)

undefined4 sub_080B801C(int param_1)

{
  undefined uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  int local_28;
  int local_24;
  
  iVar2 = *(ushort *)(param_1 + 0xce) - 1;
  *(ushort *)(param_1 + 0xce) = (ushort)iVar2;
  iVar5 = *(int *)(param_1 + 0x4c);
  iVar4 = *(int *)(param_1 + 0x50);
  iVar3 = sub_080B52CC(param_1,*(int *)(param_1 + 0xd0),(int *)(param_1 + 0xbc),&local_28,0);
  if (iVar3 == *(int *)(param_1 + 0xd0)) {
    *(int *)(param_1 + 0xbc) = local_28;
    *(int *)(param_1 + 0xc0) = local_24;
    *(int *)(param_1 + 0x4c) = local_28;
    *(int *)(param_1 + 0x50) = local_24;
    iVar5 = local_28 - iVar5;
    iVar4 = local_24 - iVar4;
    uVar1 = sub_08025930(iVar5,iVar4);
    *(undefined *)(param_1 + 0xcc) = uVar1;
    iVar4 = sub_080C88FC(iVar4 * iVar4 * iVar5 * iVar5);
    *(uint *)(param_1 + 0x54) = (uint)(iVar4 << 0x10) >> 0x18;
    if (iVar2 == 0) {
      if (*(char *)(param_1 + 0xe) == '\x02') {
        *(byte *)(iVar3 + 0xb) = *(byte *)(iVar3 + 0xb) & 0x7f;
      }
      sub_080B81B8(param_1);
    }
  }
  else {
    sub_080B81B8(param_1);
    sub_080B7CAC(param_1);
  }
  return in_lr;
}

