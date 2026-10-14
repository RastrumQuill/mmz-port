// sub_08039C08 at 0x08039C08 (thumb)

undefined4 sub_08039C08(int param_1)

{
  byte bVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  if ((((*(ushort *)(uint *)(param_1 + 0x90) & 0x40) != 0) || (*(short *)(param_1 + 0x8c) == 0)) &&
     (uVar3 = (uint)DAT_02022b64, (DAT_02022b64 & 0x10) == 0)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082acbf8 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(undefined *)(param_1 + 0xe) = 1;
    *(uint *)(param_1 + 0x90) = uVar3 & 0x10;
    *(char *)(param_1 + 0x94) = (char)(uVar3 & 0x10);
    bVar1 = *(byte *)(param_1 + 10);
    *(byte *)(param_1 + 10) = bVar1 & 0xfb;
    if ((bVar1 & 0x10) == 0) {
      puVar2 = (undefined *)(*(int *)(param_1 + 0xc4) + 0xdd);
    }
    else {
      puVar2 = (undefined *)(*(int *)(param_1 + 0xc4) + 0xdc);
    }
    *puVar2 = 1;
    iVar4 = *(int *)(param_1 + 0xc4);
    if ((*(char *)(iVar4 + 0xdc) != '\0') && (*(char *)(iVar4 + 0xdd) != '\0')) {
      *(undefined *)(iVar4 + 0xdb) = 2;
    }
    sub_08039AD0(param_1);
    return in_lr;
  }
  if (*(char *)(*(int *)(param_1 + 0x20) + 0xd) == '\x02') {
    *(undefined *)(param_1 + 0xf) = 9;
    sub_08001EE8((int)*(short *)(param_1 + 200));
    *(short *)(param_1 + 200) = -1;
  }
  sub_080C8A98(param_1,*(undefined4 *)(&DAT_082adad0 + (uint)*(byte *)(param_1 + 0xf) * 4));
  return in_lr;
}

