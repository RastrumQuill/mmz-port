// sub_0804F584 at 0x0804F584 (thumb)

undefined4 sub_0804F584(int param_1)

{
  ushort uVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08048ACC(param_1);
    *(undefined *)(param_1 + 0x44) = 1;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    sub_080033F0(param_1 + 0x6c,0);
    *(int *)(param_1 + 0x4c) = DAT_02022c7c + -0xa000;
    *(undefined *)(param_1 + 0x12) = 0x50;
    *(undefined2 *)(param_1 + 0x48) = 0x80;
    *(undefined2 *)(param_1 + 0x4a) = 0x80;
    iVar4 = sub_08005458(DAT_02022e98);
    if (iVar4 == 0) {
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
    else {
      *(undefined *)(iVar4 + 9) = 8;
      *(undefined4 *)(iVar4 + 0x14) = 0x804ed6d;
      *(undefined2 *)(iVar4 + 0x1c) = DAT_02022eb0;
      *(undefined *)(iVar4 + 0x1e) = DAT_02022f38;
      *(undefined *)(iVar4 + 0x10) = 2;
      *(int *)(iVar4 + 0x20) = param_1;
      *(int *)(param_1 + 0x24) = iVar4;
      sub_08048ACC(iVar4);
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 0x300;
  sVar3 = sub_080C8AD0((0x50 - (uint)*(byte *)(param_1 + 0x12)) * 0x80,0x50);
  uVar1 = sVar3 + 0x80U & 0xff;
  *(ushort *)(param_1 + 0x48) = uVar1;
  *(ushort *)(param_1 + 0x4a) = uVar1;
  iVar4 = *(int *)(param_1 + 0x24);
  if (iVar4 != 0) {
    *(ushort *)(iVar4 + 0x48) = uVar1;
    *(ushort *)(iVar4 + 0x4a) = uVar1;
  }
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    sub_0800561C(param_1 + 0x74,&DAT_082af258);
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
    sub_080489E4(param_1);
    if (iVar4 != 0) {
      sub_0800561C(iVar4 + 0x74,&DAT_082af274);
      sub_080489E4(iVar4);
    }
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  return in_lr;
}

