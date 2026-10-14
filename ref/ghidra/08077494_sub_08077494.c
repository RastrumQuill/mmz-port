// sub_08077494 at 0x08077494 (thumb)

undefined4 sub_08077494(int param_1)

{
  char cVar1;
  uint uVar2;
  uint *puVar3;
  undefined4 in_lr;
  
  uVar2 = (uint)DAT_02022ae0;
  if ((DAT_02022ae0 & 0x10) == 0) {
    puVar3 = (uint *)(param_1 + 0x90);
    if (((*(ushort *)puVar3 & 0x244) == 0) || (*(char *)(param_1 + 0x10) == '\x01')) {
      sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b1978 + (uint)*(byte *)(param_1 + 0xd) * 4));
      if (((*puVar3 & 0x10001) == 0) && ((*(byte *)(param_1 + 0x94) & 2) == 0)) {
        cVar1 = (&DAT_02022fe0)[*(byte *)(param_1 + 9)];
        *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | cVar1 << 4;
        *(char *)(param_1 + 0x1e) = cVar1;
      }
      else {
        *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | 0xd0;
        *(undefined *)(param_1 + 0x1e) = 0xd;
      }
    }
    else {
      sub_0808827C(1,param_1 + 0x4c);
      *puVar3 = uVar2 & 0x10;
      *(char *)(param_1 + 0x94) = (char)(uVar2 & 0x10);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 8)
      ;
    }
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}

