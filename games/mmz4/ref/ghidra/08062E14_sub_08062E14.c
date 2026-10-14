// sub_08062E14 at 0x08062E14 (thumb)

undefined4 sub_08062E14(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  undefined auStack_44 [32];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  sub_08128B5C(auStack_44,&DAT_0812912c,0x20);
  if (*(char *)(param_1 + 0xf) == '\0') {
    uVar3 = sub_080661B0(param_1);
    sub_080662B8(&local_24,param_1,uVar3);
    local_1c = local_24;
    local_18 = local_20;
    uVar5 = ~(uint)(*(byte *)(DAT_0202dbf0 + 10) >> 4);
    iVar4 = sub_0809B434(param_1,&local_1c,1,uVar5 & 1);
    *(int *)(param_1 + 0xc4) = iVar4;
    if (iVar4 == 0) {
      *(undefined *)(param_1 + 0xd) = 6;
      *(undefined *)(param_1 + 0xe) = 0;
      goto LAB_08062f86;
    }
    sub_08065A40(param_1,0x19);
    *(char *)(param_1 + 0x4c) = (char)(uVar5 & 1);
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((uVar5 & 1) << 4);
    if ((uVar5 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(undefined4 *)(param_1 + 0x54) = local_1c;
    *(undefined4 *)(param_1 + 0x58) = local_18;
    *(undefined *)(param_1 + 0x12) = 0x20;
    *(char *)(param_1 + 0x13) = (char)uVar3;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  sub_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       (&DAT_08857a44)
                       [*(ushort *)(&DAT_08857b64 + (uint)*(byte *)(param_1 + 0xb4) * 2)]) +
               (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb4) * 4 +
                                       *(int *)(&DAT_08857b5c + (uint)*(byte *)(param_1 + 0xb5) * 4)
                                       ) + (int)*(char *)(param_1 + 0x71)) * 0x18);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 != '\0') {
    return in_lr;
  }
  uVar5 = sub_08066308(auStack_44 + (uint)*(byte *)(param_1 + 0x13) * 4,4);
  if ((int)uVar5 < 2) {
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      uVar5 = uVar5 + 1;
    }
    uVar5 = uVar5 & 1;
  }
  local_1c = *(undefined4 *)(param_1 + 0x54);
  local_18 = *(undefined4 *)(param_1 + 0x58);
  iVar4 = sub_0809B734(param_1,&local_1c,uVar5 & 0xff);
  *(int *)(param_1 + 200) = iVar4;
  if (iVar4 == 0) {
    *(undefined *)(param_1 + 0xd) = 6;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  else {
    *(undefined *)(param_1 + 0xe) = 2;
  }
LAB_08062f86:
  *(undefined *)(param_1 + 0xf) = 0;
  return in_lr;
}

