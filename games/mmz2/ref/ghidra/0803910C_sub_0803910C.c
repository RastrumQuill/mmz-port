// sub_0803910C at 0x0803910C (thumb)

undefined4 sub_0803910C(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  if ((*(char *)(iVar4 + 0x212) == '\0') || (*(char *)(iVar4 + 0x213) == '\0')) {
    bVar1 = *(byte *)(param_1 + 0x12);
    bVar2 = *(byte *)(param_1 + 0x13);
    uVar5 = (uint)*(byte *)(iVar4 + 0x215);
    *(byte *)(param_1 + 0x12) = *(byte *)(iVar4 + 0x215);
    iVar4 = -((uint)*(ushort *)(iVar4 + 0x218) & (uint)(byte)(&DAT_08335a8a)[uVar5]);
    iVar3 = iVar4 >> 0x1f;
    *(byte *)(param_1 + 0x13) = (byte)((uint)iVar4 >> 0x1f);
    if ((uVar5 != bVar1) || (-iVar3 != (uint)bVar2)) {
      sub_080128AC(param_1,*(undefined2 *)(&DAT_083360b8 + iVar3 * -2 + uVar5 * 4),
                   (short)*(char *)(param_1 + 0x71),(short)*(char *)(param_1 + 0x72));
    }
    sub_080128D4(param_1);
  }
  else {
    sub_0803918C(param_1);
  }
  return in_lr;
}

