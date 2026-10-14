// sub_08025400 at 0x08025400 (thumb)

undefined4 sub_08025400(int param_1)

{
  ushort uVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  if ('\x01' < *(char *)(param_1 + 0x72)) goto LAB_0802545e;
  *(undefined *)(param_1 + 0xf) = 2;
  if (((*(byte *)(param_1 + 0x202) & 4) == 0) && (*(char *)(param_1 + 0x1fc) != '\x05')) {
LAB_08025458:
    uVar3 = 0x200;
  }
  else {
    uVar1 = DAT_0202ec34;
    if (*(char *)(param_1 + 0x10) != '\0') {
      uVar1 = DAT_0202ec36;
    }
    if ((uVar1 & 0x8000) != 0) goto LAB_08025458;
    uVar3 = 0x280;
  }
  *(undefined4 *)(param_1 + 0xc4) = uVar3;
LAB_0802545e:
  bVar2 = *(byte *)(param_1 + 0x198 + (uint)*(byte *)(param_1 + 0x195)) >> 3;
  sub_08022BD8(param_1,bVar2 & 1);
  iVar5 = -1;
  if ((bVar2 & 1) != 0) {
    iVar5 = 1;
  }
  if (*(byte *)(param_1 + 0x182) < 100) {
    iVar4 = sub_080EF150((uint)*(byte *)(param_1 + 0x182) << 7,100);
    iVar4 = 0x80 - iVar4;
  }
  else {
    iVar4 = 0;
  }
  uVar3 = sub_0801E7B4(param_1,*(undefined4 *)(param_1 + 0x5c),iVar5 * iVar4,iVar5 << 5,
                       *(undefined2 *)(param_1 + 0xe4));
  *(undefined4 *)(param_1 + 0x5c) = uVar3;
  return in_lr;
}

