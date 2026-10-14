// sub_08057B9C at 0x08057B9C (thumb)

undefined4 sub_08057B9C(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_080055FC(param_1 + 0x74,&DAT_082af980,param_1 + 0x4c,0x30);
    *(int *)(param_1 + 0xb4) = param_1;
    *(undefined4 *)(param_1 + 0xb0) = 0x80568e1;
    sub_080033F0(param_1 + 0x6c,1);
    *(undefined *)(param_1 + 0x12) = 0;
    uVar4 = *(undefined4 *)(param_1 + 0x4c);
    uVar1 = sub_0800869C(uVar4,*(undefined4 *)(param_1 + 0x50));
    iVar2 = sub_08008BC0(uVar4,uVar1);
    iVar3 = sub_080089EC(iVar2,uVar1);
    *(int *)(param_1 + 0xb8) = iVar2 + iVar3 >> 1;
    *(undefined4 *)(param_1 + 0xbc) = 0;
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf3 | 8;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_0805580C(param_1);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  *(undefined *)(param_1 + 0xd) = 1;
  *(undefined *)(param_1 + 0xe) = 0;
  return in_lr;
}

