// sub_080BA448 at 0x080BA448 (thumb)

undefined4 sub_080BA448(int param_1)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  pbVar1 = (byte *)sub_080BA7D8();
  if (*pbVar1 < 2) {
    uVar3 = (uint)*(byte *)(param_1 + 0x12);
    iVar4 = *(int *)(pbVar1 + 0x10);
    uVar2 = (uint)*(byte *)(iVar4 + 0x17b);
    if (uVar2 < uVar3 + 1) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
      if ((uVar3 + 1 < uVar2) && (*(int *)(param_1 + 0x24) == 0)) {
        sub_080BA6C8(pbVar1,param_1);
      }
      *(uint *)(param_1 + 0x4c) = uVar3 * 0x1000 + 0xa400 + *(int *)(pbVar1 + 8);
      uVar2 = (uint)*(byte *)(iVar4 + 0x17c + uVar3);
      if (uVar2 != 0) {
        iVar4 = sub_080C8C38(uVar2,3);
        uVar2 = iVar4 + 1;
      }
      sub_080033F0(param_1 + 0x6c,(&DAT_082b8954)[uVar2 * 2]);
      sub_08003458(param_1 + 0x6c);
      *(undefined *)(param_1 + 0x46) =
           *(undefined *)
            (*(char *)(param_1 + 0x71) * 4 +
            *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b85b0)[*(byte *)(param_1 + 9)] + 8);
    sub_080BA608(param_1);
  }
  return in_lr;
}

